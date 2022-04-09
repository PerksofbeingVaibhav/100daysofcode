var express= require('express');
var bodyParser= require('body-parser');
var mongoose= require('mongoose');

app.use(bodyParser.json())
app.use(express.static('public'))
app.use(bodyParser.urlencoded({ extended: true }))


mongoose.connect('mongodb://localhost:27017/mydb',{
    useNewUrlParser: true,
    useUnifiedTopology: true
});

var db=mongoose.connection;

db.on('error',()=>console.log("error in connecting to database"));
db.once('open', ()=>console.log('connected to Database'));
app.post("/signup",(req,res)=>{
    var name=req.body.name;
    var email= req.body.email;
    var phno= req.body.phno;
    var password= req.body.password;


    var data={
        "name": name,
        "email": email,
        "phno": phno,
        "password": password
    }
    db.collection('users').insertOne(data,(err,collection)=>{
        if(err){
            throw err;
        }
        console.log("Record Inserted Successfully!");
    });

    return res.redirect('signup_success.html');
})
const app =express();
app.get("/",(req,res)=>{
    res.set({
        "Allow-Access-Allow-Origin":'*'
    })
    return res.redirect('index.html');
}).listen(6000);

console.log("listening on Port 6000");
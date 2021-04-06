function PosOrNeg(){
var a = parseInt(document.getElementById("Text1").value);
var c;
if (a>=1){
    c="The Number Is Positive";
}
else if(a<0){
    c="The Number Is Negative";
}
else if(a==0){
    c="The Number Is Not Positive Or Negative, The Number Is Zero";
}
document.write(c);
}
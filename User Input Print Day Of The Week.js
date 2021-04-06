function DayOfTheWeek(){
    var a=parseInt(document.getElementById("T1").value)
    var b;
    
    if (a==1){
        b="The Day of The Week Is Sunday";
    }

    else if (a==2){
        b="The Day of The Week Is Monday";
    }
    
    else if (a==3){
        b="The Day of The Week Is Tuesday";
    }
    
    else if (a==4){
        b="The Day of The Week Is Wednesday";
    }

    else if (a==5){
        b="The Day of The Week Is Thursday";
    }

    else if (a==6){
        b="The Day of The Week Is Friday";
    }

    else if (a==7){
        b="The Day of The Week Is Saturday";
    }

    else if (a>7){
        b="Please Do This Again. There is no '8th' day of the week."
    }
    document.write(b);
}

function moveHands(){
	with (new Date()){
		h=30 * ((getHours() % 12) + getMinutes() / 60); // 30 degrees hour
		m=6 * getMinutes(); // 6 degrees every minute
	    s=6 * getSeconds(); // 6 degrees every second
	  // setting the rotate CSS attribute to those degree values -->
	  document.getElementById("seconds").style.csstext= "-webkit-transform:rotate(" + s + "deg);";
	  document.getElementById("minutes").style.csstext="-webkit-transform:rotate(" + m + "deg);";
	  document.getElementById("hours").style.csstext="-webkit-transform:rotate(" + h + "deg);";
	 SetTimeout(moveHands, 1000); // calling the function every second
	}

}  

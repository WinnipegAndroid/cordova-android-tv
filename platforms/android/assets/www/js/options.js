// Save API click event
$(".api-btn").click(function(){
    var data = document.getElementById("api_key_input").value;
    localStorage["api"] = data; 
});
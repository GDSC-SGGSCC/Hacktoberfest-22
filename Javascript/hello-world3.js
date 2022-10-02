function print(){
    let text = new Array(12).fill(0);
    let textValidation = "Hello World!";

    // console.log(textValidation.length)
    let tmp = "";
    for(let i=0; i<=textValidation.length; i++){
        
        while(tmp[i] != textValidation[i]){
            text[i]++; tmp = "";
            for(let j=0; j<=11; j++) tmp += String.fromCharCode(text[j]);
            console.log(tmp);
        }

    }
}
print()
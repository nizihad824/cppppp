function bubbleSort(inputArr) {
    let n = inputArr.length;
    
    for(let i = 0; i < n; i++) {
        for(let j = 0; j < n; j++) {
           
            // Comparing and swapping the elements
            if(inputArr[j] > inputArr[j+1]){
                let t = inputArr[j];
                
                inputArr[j] = inputArr[j+1];
                inputArr[j+1] = t;
                 
            }
            console.log(inputArr)
             
            
        }
       
    }
    
    return inputArr;
}
let inputArr = [3,1,6,7,2,5,4];
bubbleSort(inputArr);
 console.log(inputArr);
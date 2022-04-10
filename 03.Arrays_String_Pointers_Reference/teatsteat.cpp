// #include <bits/stdc++.h>
// #include <iostream>
// #include <stdio.h>
// using namespace std;




// function convertString(str){
//     var result = "";

//     if(str.indexOf("_") > -1){
//         var arr = str.split("_");
//         result = arr[0];
//         for(let i=1; i< arr.length; i++){
//             result = result + arr[i].charAt(0).toUpperCase() + arr[i].slice(1);
//         }       

//     }else{
//         for(let i=0; i<str.length; i++){
//             if(str[i] == str.charAt(i).toUpperCase()){
//                 result = result + "_" + str[i].toLowerCase();
//             }
//             else{
//                 result = result + str[i];
//             }
//         }
//     }

//     return result;
// }

// console.log(convertString("this_is_a_variable"));
// console.log(convertString("thisIsAVariable"));
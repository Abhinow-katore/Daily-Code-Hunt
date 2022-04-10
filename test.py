
# # Function to Find the first repeated word in a string 
# from collections import Counter 
  
# def firstRepeat(input): 
      
#     # first split given string separated by space 
#     # into words 
#     words = input.split(' ') 
      
#     # now convert list of words into dictionary 
#     dict = Counter(words) 
  
#     # traverse list of words and check which first word 
#     # has frequency > 1 
#     for key in words: 
#         if dict[key]>1: 
#             print (key) 
#             return
  
# # Driver program 
# if __name__ == "__main__": 
#     input = input()
#     firstRepeat(input) 


















string = input();  
   
#Converts the string into lowercase  
string = string.lower();  
   
#Split the string into words using built-in function  
words = string.split(" ");  
   
print("Duplicate words in a given string : ");  
for i in range(0, len(words)):  
    count = 1;  
    for j in range(i+1, len(words)):  
        if(words[i] == (words[j])):  
            count = count + 1;  
            #Set words[j] to 0 to avoid printing visited word  
            words[j] = "0";  
              
    #Displays the duplicate word if count is greater than 1  
    if(count > 1 and words[i] != "0"):  
        print(words[i]);  
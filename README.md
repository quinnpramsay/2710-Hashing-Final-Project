# 2710 Hashing Final Project

For our final project for our 2710 Advanced Data Structures and Algorithm Development class, we decided to make a program that could take any message under 100 characters and encrypt it into a unique set of numbers. This program also has a function where it can take any message created by the algorithm and decrypt it back into the original message. 

Encryption:

Our encryption function uses an ASCII table to give every letter a unique number. To make the message more secure, we added a shift function. The user who inputs the message will input a shift number that gets added to each number, so it is not decryptable by a simple ASCII table, but the user decrypting it must know the shift number. Also, when the message gets encrypted, it generates a -1 at the end. This tells the decryption function where the message ends. 

Decryption: 

Our decryption function takes the user's inputted encrypted code and the message's shift number. It then uses the same ASCII table to turn the numbers back into the letters and use the shift key to get the message back to the correct characters. Once the decryption function sees a -1 it knows the message is complete and can be returned to the user. 

Delegation: 

Encryption - Quinn

Decryption - Crawford

Main Function - Quinn

Project Report - Crawford

    

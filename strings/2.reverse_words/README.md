//Brute force


when u see this imeediately u should get remembered that this is words.so u need array.
take 1 word and push it to array.
to take that word:
     if space occurs then that is one word.so push it to array and make the word empty.
     if space doesnt occur then continue to push that letter into the word.

NOTE: 
     now the last word is stored into the word but not ibto the arra bcz after last letter there is no space so it will just be into the word but not into arr.so u need to push that also to the arr after the loop;

now reverse the array nd combine them into a string.
now in string there should be spaces also.
this spaces should be btwn words and not at te last word.so u will write  if i<arr.size-1.

NOTE:
    if u dont write that condition then the space occurs at last also.check.

tc:O(n)
sc:O(n)    //taking ectra arr and inserting them again




//OPTIMAL APPROACH    (space complexxity reduction)


this goes from back.start iterating till space occurs.

now if there is no space u will take end and iterate till space comes.now from i to end one word.
u will push this to result string.

if there is space u will do i--;
but if there are spaces at starting then u have to remmove them and write normally.so u will write this statemen at top.

after that u check if i is out of bounds or not.if so then break;

this condition is necessary endhukantey startinglo 2 spaces unnayi anuko, i-- chestham kada spaces  untey as per starting statement, so ala -- chesthunnappudu i out of bounds osthe u will break;

then u will take end bcz u will take substring snce it is word.

now this substring has to appened to res including spaces.
so if there is no word intitally in result that is if result is empty then u will push 1st word.

now if there are alredy some words in the result, then u need to add spaces btwn words also.

tc:O(n)
sc:O(1)
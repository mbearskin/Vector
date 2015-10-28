# Vector
Intro to C++ Assigment 6

Prompt:

For this assignment you will submit (in the usual way) multiple files. These files will contain a C++ program that you have named appropriately, each file with an appropriate name and appropriate extension. Be sure that your program compiles using the g++ compiler before you submit it. To compile a program with multiple files, use the usual g++ command but instead of the single file you compiled before, compile *.cpp and the compiler will "grab" all the cpp files in that directory. So, you see, it's important that you put all the files for a particular program in their own directory! You don't have to list the header files; that will happen automatically. Use cssubmit in the usual way. 

Background: As you all know, Lisa Simpson is the brains of the "operation" there in Springfield on Evergreen Terrace. She is a very precocious child:  being only ~10 yrs old and in ~3rd grade, yet more intelligent than all the other characters in the show combined.1  So, now Lisa is studying vectors in her math class and she is asking Marge to help her with her math homework.  Since Marge is pretty much at the same intellectual level as her nimrod husband, she is needing your help - to write a program that will read in vector values from the user and then compute several vector calculations.  

So now you're thinking, "oh no, Lisa is smarter than I am! I don't know the first thing about vectors!"  Well, don't despair, here's a short tutorial on how vectors work.  A vector is quite simply an ordered set of real numbers. In our case, an ordered triple. They are often represented like this:  v = <a,b,c>, where a, b, and c are real numbers. The values a, b, and c are called the elements of v. The sum of two vectors, v + u, is another vector whose elements are the sums of the corresponding elements of v and u. Letting v = <a,b,c> and u = <d,e,f>, v + u = <a+d,b+e,c+f>.  Likewise with a difference.  The "dot product" of two vectors, v and u, is a single real number that is the sum of the products of the corresponding elements. We'll use * for our "dot".  Thus, v*u = <a,b,c> * <d,e,f> = ad+be+cf.  The magnitude of a (single) vector is the square root of the sum of the squares of its elements.  We use |v| to signify magnitude.  So, |v| = [a2+b2+c2]1/2.  The cross product of a vector with another vector is a resultant vector. 
         v X u = <a,b,c> X <d,e,f> = <bf-ec, dc-af, ae-db>.

This is what your program is going to do.

Specifications: Your program is to be menu driven.  It should look like:
                        
                                Vector Options
                                1.  Enter vectors
                                2.  Sum
                                3.  Magnitude
                                4.  Dot Product
                                5.  Cross Product
                                6.  Quit

When option 1 is chosen, the program should ask the user if they want to enter one or two vectors and then proceed accordingly.  With each other option, the so named value should be presented (output to the user) and the menu returned until 'quit' is chosen.  Be sure to make your output pretty.  Output a vector in the  < x, y, z > format.

You need to pay attention to how your menu works.  So suppose a user (Marge, presumably) enters just one vector.  If she chooses options 2, 4, or 5, then she should be presented with an error message stating that she only has one vector entered, and then the menu should be presented again.  Think boolean flags to implement this functionality. 

When coding this program, use a struct to contain a vector.  If you know what it is, do not use the STL Vector class.  (If you don't know what it is, also don't use it.)  Just say no!  You will need to be able to calculate a square root.  You can use the sqrt() function supplied by the compiler for this program.  It is in the library called cmath.  Thus, you will need to put #include <cmath> at the beginning of your program (with your other include).  Then you need to know that sqrt() takes a double and returns a double.  (Remember, if you pass an int or float to a function that takes a double, it will automatically promote it to a double.)

You are required to use functions to code up this program.  It is up to you how to break up your code to accomplish the above tasks.  I think the choices should be fairly simple to make.  But remember, each function should have a dedicated purpose.  I can see functions named the same as options 1 through 5 above.  But there should be more.  One function clearly should be a print_vector() function. I highly recommend that you first define your vector struct and define a print_vector() function, declare a vector and give it values, then print it so you can see that you are actually creating what you think you are. Then start coding up your functions. And remember to comment your functions (and code in general).  

You are also required to put this program into multiple files.   We'll show you how to do this in class.

When you submit: enter the following
choose option 3 (should generate an error from your program)
choose option 1 and enter <1,2,3>
choose option 2 (should also generate an error message)
choose option 3
choose option 1 and enter < 1,2,3 > and < 4,5,6 >
choose option 4
choose option 5
quit
As usual, be sure to ask if have questions.

1Lisa has been exactly the same for about 23 years.  So one could argue against my "precocious" label. But, oh well.....

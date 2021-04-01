# FizzBuzz

I wanted to try my hand at the famous FizzBuzz test, since it is commonly used in interviews. 

The FizzBuzz test is a program that prints numbers from 1 to 100. However, if the number reached is a multiple of **3** the program prints **Fizz**, and if it is a multiple of **5** the program prints **Buzz**. If the number is a multiple of both **3** and **5**, the program prints **FizzBuzz**.

At first I thought the test was simple, but after some research I learned that there is so much more depth to this problem. There is a multitude of ways you can successfully solve the FizzBuzz test, but not every method is considered good practice. To use my first approach as an example, I had initially made a nest of **if** statements, which is usually how I approach such problems. However, after some research, I had learned that this is a sloppy way of solving it. It looked confusing, and if I were ever tasked to make changes to the code, for instance, if I had to instead search for multiples of **8** to print **buzz** instead of **5**, I would have to go in and change every single **if** statement accordingly. It would be very easy to make mistakes. 

My second approach was to create an empty string, and append **Fizz** and/or **Buzz** to it if the conditions were met. If the string was empty by the end of the iteration of the loop, the program would simply print out the current number. I will continue to find alternate ways of solving this test that may be more efficient.

# RubiksCube2x2
C Program for Solving 2x2 Rubiks Cube using Ortega CFOP

## Getting Started

Rubik’s Cube is a 3D combinational puzzle invented in 1974. Originally called Magic Cube. It is world’s top selling puzzle game. They are available in various variety. One of it’s type is 2x2 Rubik’s cube.
In it each of six faces is covered by 4 stickers. Each of one of six solid colours: White, Red, Blue, Orange, Green and Yellow. Colour arrangement is such that White is on opposite face of Yellow. Similarly for  Blue and Green, Red and Orange. Red, White and Blue are arranged in that order in a clockwise arrangement. 
CharCube is a program which provides us with steps to solve a scrambled 2x2 Rubik’s cube. It is a solution providing program, which takes the state of each faces of scrambled cube from the user and perfroms operations as per the Algorithm used. In return gives the steps that user need to perform to solve the cube.


## Details of Program

In the program of cube solver, we have used character array (string) to input the colours of the faces of cube and different user defined functions which will perform different tasks

### Introduction to the user defined functions used in the program
```
void clock()      //It is used to swap array elements clockwise.
void instruct()   //It is used to print the rules and instructions which will help the user while inputting the colours.
void base ()      //It is used to make the base of the cube.
void oll()        //It is used to orient the last layer of the cube.
void pll()        //It is used to permute the last layer of the cube.
void finalcheck() //It is used to check whether cube is solved or not.  
```

### Functions for different faces of cube:
```
void up()     //It is used to swap the array elements when upper face of cube is rotated clockwise.
void down()   //It is used to swap the array elements when down face of cube is rotated clockwise.
void left()   //It is used to swap the array elements when left face of cube is rotated clockwise.
void right()  //It is used to swap the array elements when right face of cube is rotated clockwise.
void front()  //It is used to swap the array elements when front face of cube is rotated clockwise.
void back()   //It is used to swap the array elements when back face of cube is rotated clockwise.
```

### Working of the program:

* First of all user inputs colours of all faces of cube by using character array i.e. string. All the inputted colours are read by gets() function.
* The next step is the formation of base. For this we have prepared a function called void base (). The base function is called four times so as to orient  every element of base. The base function scans six elements i.e two of front, two of left, one of up and one of down. If there is no white (base) colour in the six elements scanned by base, then up function is called. Again it will scan the same six elements as mentioned above and orient them.
* Now to make the opposite face of base, we orient the last layer by using function void oll(). For orientation of last layer there are seven ideal cases. Each case has different algorithm. It is not fixed that every time only these ideal cases will appear. So sometimes we have to switch the cases we got with ideal cases. By using these seven algorithm the opposite face of base is done.
* The next step is permuting both layers of cube. For this we have defined a function named as void pll(). For permuting the layers there are seven ideal cases. each case has different algorithm. Here we have decleared flag, flagu, flagd. Flagu is for counting the number of pairs of similar colours on every face of last layer. Flagd is for counting the number of pairs of similar colours on every face of first layer. These flags are used to reduce the steps and accordingly different sets of algorithms are applied. Now both layers of the cube are oriented.
* Now  its time to check whether the cube is solved or not. for this we are using the function called finalcheck(). If the last layer of cube is not positioned properly by using void pll(), then up() function is called accordingly.
* Hence the cube is solved. 


## Problems faced with solutions:

* There are so many methods for solving the cube. So we found the efficient and short method of OLL and PLL. Which we have used in program.
* In the starting we were using integer arrays for inputting the colours. But it was little bit difficult for the new user. So we replaced the integer array by character array so that new user can input the colours easily.
* Also in starting the base function was not giving output properly, since there was mistake in logic, then we improved our logic and then it worked properly.


## Limitations:

* If the user inputs wrong colours, still computer is giving output of some steps.
* Here the base colour is white only user cannot change that colour.


## Future scope:

* We can implement a program of nearly similar logic for solving 3*3  cube.
* When user inputs the colours, computer will scan all faces and will find the face which has more similar colours and instruct the user to keep that face as base. This will decrease the execution time as well as length of program.
* If the user entering wrong inputs, computer will give an error or it will print the instruction that enter the right colours. 


## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Abhishek Wagh** - *Initial work* - [F.Y.B.Tech VIT](https://github.com/abhishekwagh)
* **Avinash Kangare** - *Initial work* - [F.Y.B.Tech VIT](https://github.com/abhishekwagh)

See also the list of [contributors](https://github.com/abhishekwagh/RubiksCube2x2/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc

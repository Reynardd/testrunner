# TestRunner

![preview](https://user-images.githubusercontent.com/83103488/227313206-ae26fe24-825f-46b1-9233-520085d852e5.png)

This program runs the tests you give it on the program <b>you</b> tell it

![Screenshot 2023-03-23 220312](https://user-images.githubusercontent.com/83103488/227313990-ff514db4-89ef-4631-90b2-fd35d6d970f3.png)

it looks for all the files inside the `In` and `Out` folder.gives all the data inside an Input file to the program and compares it with
the text inside Output

for example we have a program that takes two numbers and multiply them by each other.
we have test case `1.txt` inside our `In` folder:

![image](https://user-images.githubusercontent.com/83103488/227315151-7af035c5-e83d-4db0-870c-a0f73cb91438.png)

and have the output inside `Out` folder:

![image](https://user-images.githubusercontent.com/83103488/227315370-9f482cd1-fd83-41a6-abcc-455d82ec6891.png)

> __Note__ name of the test should be <b>exactly the same</b> in both `In` and `Out` folder.
---
to run this program. first compile it (the compiled version is already [there](./executables)) and add it to your enviroment variables (Windows) or place it next
to your executable

in shell: `testrunner <executable name> <path to tests - optional>`
where \<path to tests\> is the directory that contains `In` and `Out` folder.
if you don't pass this argument to the program it will look for these folders inside `./Tests/`

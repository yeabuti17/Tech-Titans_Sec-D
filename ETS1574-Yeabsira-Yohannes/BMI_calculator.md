# Problem analysis
calculate the Body Mass Index (BMI) for multiple people, determine their weight category, and provide feedback based on their BMI.
1. Inputs:
The number of people whose BMI needs to be calculated .
For each person:
 Weight in kilograms (weight).
 Height in meters (height).
2. Processing:
 Calculate BMI using the formula:
BMI=weight/(height*height)
the calculated BMI against predefined ranges to determine the weight category:
BMI < 18.5: Underweight
18.5 ≤ BMI ≤ 24.9: Healthy weight
25 ≤ BMI < 29.9: Overweight
BMI ≥ 30: Obese
3. Outputs:
Display the BMI for each individual.
Provide feedback on their weight category.


# Algorithm
step 1: Start.
step 2: Input the number of people (num).
step 3: For each person from 1 to num:
     step 3.1: Input their weight in kilograms (weight).
     step 3.2: Input their height in meters (height).
     step 3.3: Calculate BMI using the formula: BMI=weight/(height*height).
     step 3.4: ​Output thr calculated BMI.
     step 3.5: Determine the weight category:
                   step 3.5.1: If BMI < 18.5, display "You are underweight!"
                   step 3.5.2: If 18.5 ≤ BMI ≤ 24.9, display "You are in normal weight!"
                   step 3.5.3: If 25 ≤ BMI < 29.9, display "You are overweight!"
                   step 3.5.4: If BMI ≥ 30, display "You are obese!"
step 4: End.


# BMI Calculation and Evaluation Flowchart
### pseudocode
     1.start the program.
     2.read the number of person as num.
     3.declare and initalize the counter to 1(i=1).
     4.read the the weight and height.
     5.calculate the BMI as BMI= weight/(height*height).
     6.check the BMI,
        6.1 if the BMI is b/n 18.5 and 24.9(BMI>=18.5 and BMI<=24.9)
            print BMI and "normal".
            go to step 7.
        6.2 if the BMI is greater than 25(BMI>25)
            print BMI and "overweight".
            go to step 7.
        6.3 else 
            print BMI and "underweight".
            go to step 7.
     7.increment the counter (i++)       
     8.check wether the counter is less than or equals to num     
        8.1 if i<=num,
            go to step 4.
    9.end the program.

























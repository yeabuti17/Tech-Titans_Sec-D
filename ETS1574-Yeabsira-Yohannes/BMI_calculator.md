# Problem analysis
calculate the Body Mass Index (BMI) for multiple people, determine their weight category, and provide feedback based on their BMI.
  1. Inputs:
        The number of people whose BMI needs to be calculated (num).
        For each person:
            Weight in kilograms (weight).
            Height in meters (height).

  2. Processing:
        Calculate BMI using the formula:
        BMI = weight / (height * height)
        Compare the calculated BMI against predefined ranges to determine the weight category:
            BMI < 18.5: Underweight
            18.5 ≤ BMI ≤ 24.9: Healthy weight
            25 ≤ BMI < 29.9: Overweight
            BMI ≥ 30: Obese

  3.Outputs:
        Display the BMI for each individual.
        Provide feedback on their weight category.

## algorithm design
         ### pseudocode
         1.start
         2.read the number of people as num.
         3.declare the counter to 1(i=1).
         4.read their weight in kilograms and height in meters.
         5.calculate the BMI: BMI= weight/(height*height).
         6.check the BMI,
            6.1 If BMI < 18.5, display "You are underweight!"
                go to step 7.
            6.2 If 18.5 ≤ BMI ≤ 24.9, display "You are in normal weight!"
                go to step 7.
            6.3 If 25 ≤ BMI < 29.9, display "You are overweight!"
                go to step 7.
            6.4 If BMI ≥ 30, display "You are obese!"  
               
         7.increment the counter (i++)       
         8.check wether the counter is less than or equals to num     
            8.1 if i<=num,
                go to step 4.
        9.end the program. 
        
              
# Flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read the number of persons as num/]
    InputData --> InitializeCounter[Declare and initialize counter i = 1 ]
    InitializeCounter --> ReadData[/Read weight and height/]
    ReadData --> CalculateBMI[Calculate BMI = weight / height * height ]
    CalculateBMI --> CheckBMI{Is BMI between 18.5 and 24.9?}
    CheckBMI -->|Yes| NormalBMI[/Print BMI and "Normal"/]
    CheckBMI -->|No| CheckOverweight{Is BMI greater than 25?}
    CheckOverweight -->|Yes| OverweightBMI[/Print BMI and "Overweight"/]
    CheckOverweight -->|No| UnderweightBMI[/Print BMI and "Underweight"/]
    NormalBMI --> IncrementCounter[Increment counter i++ ]
    OverweightBMI --> IncrementCounter
    UnderweightBMI --> IncrementCounter
    IncrementCounter --> CheckCounter{Is i <= num?}
    CheckCounter -->|Yes| ReadData
    CheckCounter -->|No| End([End])












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



# BMI Calculation and Evaluation Flowchart

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












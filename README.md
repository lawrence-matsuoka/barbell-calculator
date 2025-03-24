# plate-platform-optimizer

A program to determine algorithmically which plates to load onto a barbell in an Olympic Weightlifting competition written in C. 

## Database
- Lifters and competition bar (0 for 20kg, 1 for 15kg)
- Relationships between lifters (who works well and who doesn't and easy to modify)
- Each PR is linked to what we'll refer to as a platform "attribute" (floor, block, rack, power rack)
- Each lifter has a table with the number associated with their PR
- Exercises are linked to PR
- Spots 1 through 6 which have attributes (1 or 0 for power rack, distance from blocks (units in platforms, i.e., platforms 3,4 = 1 while others = 0), all platforms have floor and rack assumed)
- Availability of plates (there are x number of 25kg plates, y 20kg plates, and pound plates commonly used as well for warmup)

## Platform allocation optimizer
- Weights being lifted
- Exercise correlation (lifters with similar weights can both lift from the same feature, or different weights can lift have lifters on different features)
- Relationship exceptions

## Training bar plate optimizer
- Visualization similar to competition monitor
- Which plates based on what plates are available is best for everyone to get the weight they need
- How to distribute plates based on what is currently programmed, if this is a live app, could even be updating as people checkoff a box to mark completion of set or exercise
- Account for who is lifting on the same bar

## To add later
- Google Sheets
- Modify the exercise/PR tree to include attributes

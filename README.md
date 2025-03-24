# barbell-calculator

A program to determine algorithmically which plates to load onto a barbell in an Olympic Weightlifting competition written in C. 

In Olympic Weightlifting, there are plates with the values of 25kg, 20kg, 15kg, 10kg, 5kg, 2.5kg, 2kg, 1kg, and 0.5kg, while there are the Male and Female bar which weigh 20kg and 15kg respectively. In competitions, there are 2.5kg collars on both sides and the loaders (people who put the plates onto the bar) will use the largest plate possible to attain the weight being attempted by the next lifter. 

An example is a bar with 100kg for a lifter using the 20kg bar will be loaded with one 25kg, one 10kg, and one 2.5kg plate on each side. This can be confirmed with Bar + big Red + big Green + small Red + collar = 20 + 2*25 + 2*10 + 2*2.5 + 2*2.5. This program does that exact calculation automatically based on user input, while also taking into account the current stock of plates.

The program maintains an inventory of plates that are available. By specifying whether the next lifter is using the Male or Female bar, the inventory of plates will then be used to determine the correct denomination for plates used. 

## To possibly add at a later date
- Graphics
- Functionality for competitors
- Database to maintain inventory of plates and competitors
- Export of results to nice format (i.e., .pdf, .xlsx, or something)

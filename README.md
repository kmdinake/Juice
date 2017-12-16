# Juice
Juice is the ideal tool for kick starting your project, by using best standards for that particular domain, be it AngularJS, PHP REST APIs or NodeJs. Designed to be generic, it can be extended to suit your particular needs.

# Architectural
![Juice UML diagram](/docs/juice-UML.png)

Considering the varoius ways projects can be set up, the Strategy design pattern was used to cater for this need.

Also, the Template Method design pattern is employed where for the most part the project structure is the same but only specific elements differ. As in the case of the NodeJS subclass, where the specific element is implemented via the step_i method -> possibly refactored to special_ingredient at some point in the future. Note that here, special_ingredient() will be called within pourJuice().

# Getting Started
1. Download | Clone this repo
2. Add your sub class in the src/ directory
3. Update the makefile to include your object files
4. Build & Run through CI pipleline...

*
Please ensure that your code complies with the architecture above.**

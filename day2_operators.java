// /*
// int meal_cost: the cost of food before tip and tax
// int tip_percent: the tip percentage
// int tax_percent: the tax percentage

// Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.
// */

// public class Car {
//     int maxSpeed
//     int minSpeed = 0;
  
//   double weight 4079;
  
//   boolean isTheCarOn = false;
//   char condition = 'A';
//   String nameOfCar = "Lucy";
  
//   double maxFuel = 16;
//   double currentFuel = 8;
  
//   int numberOfPeopleInCar = 1;
  
//   // f(x) = x + 1;
//   // Say x = 5;
//   // f(5) 
  
  
//   public Car(int customMaxSpeed, double customWeight, boolean customIsTheCarOn)
//     maxSpeed = customMaxSpeed;
//     weight = customWeight;
//     isTheCarOn = customIsTheCarOn;
  
//   public void printVariables() {
//     System.out.println("This is the maxSpeed")
//       System.out.println(minSpeed);
//    System.out.println(weight);
//       System.out.println(isTheCarOn);
//       System.out.println(condition);
//       System.out.println(nameOfCar);
//     public void upgradeMinSpeed() {
//     minSpeed = maxSpeed;
//       maxSpeed = maxSpeed
//     }
    
//   public coid upgradeMinSpeed() {
//     minSpeed = maxSpeed;
//     maxSpeed - maxSpeed + 1;
//   }
    
//     public void getIn() {
//       // numofPoepleInCar = mumofpplincar +1;
//       numberOfPeopleInCar++;
//     }
    
    
//     public static void main(String[] args) {
//   //TODO code application
//       public double howManyMilesTillOutOfGas() {
//         return currenFuel * mpg; 
//       }
      
//       public double maxMilesPerFillUp() {
//         return maxFuel * mpg;
//       }
      
//       Car birthdayPresent = new Car(500,5000.545, true);
//       birthdayPresent = new Car(500, 5000.545, true);
//       birthdayPresent.printVariables();
//       Car christmasPresent = new Car(550, 2000, false);
//       christmasPresent.printVariables();
//     }
    
//     public void getOut() {
//       // numofPoepleInCar = mumofpplincar -1;
//       numberOfPeopleInCar--;
//     }
//     //Custom Car VS Dafault Car
//     //default 
    
//     public double howManyMilesTillOutOfGas() {
//       return currentFue; * mpg;
//     }
    
//     public double maxMiles PerFillUp () {
//     return maxFuel * mpg;
//     }
    
//     public static void main (String[] args) {
//     //todo code application logic here 
//       Car birthdayPresent = new Car(500, 5000.545, true);
//       System.out.println("Birthday Car v1");
//     }
//     public static void printVariables
    
//     public Car(int custonMinSpeed) {
// //     customMinSpeed = minSpeed;
//         minSpeed = customMinSpeed;
//   }
    
//     tools -> methods -> install
    
//       declare
//       allocate
//       initialize
    
// //     parameter: a variable that has input to data. 
// //       argument: a piece of data passed through a function whose value is the value of the parameter
    
    
      
//       // MATH
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'solve' function below.
     *
     * The function accepts following parameters:
     *  1. DOUBLE meal_cost
     *  2. INTEGER tip_percent
     *  3. INTEGER tax_percent
     */

    public static void solve(double meal_cost, int tip_percent, int tax_percent) {
    // Write your code here
  double a = tip_percent;

         double b = tax_percent;

         double tip = meal_cost*(a/100);


         double tax = meal_cost*(b/100);

            double xy =Math.round(meal_cost + tip + tax);

    int n = (int)xy;

    System.out.println(n);
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        double meal_cost = Double.parseDouble(bufferedReader.readLine().trim());

        int tip_percent = Integer.parseInt(bufferedReader.readLine().trim());

        int tax_percent = Integer.parseInt(bufferedReader.readLine().trim());

        Result.solve(meal_cost, tip_percent, tax_percent);

        bufferedReader.close();
    }
}

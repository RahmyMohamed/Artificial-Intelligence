class MultiFunction():
    def OddEven():
        
        num= int(input("Enter The Number:"))
        
        if(num%2==0):
            print("Even Number")
        else:
            print("Odd Number")
   
    def BMIFun():
        
        BMI=int(input("Enter The Index"))
        
        if   (BMI<16):
            print("Severe Thinness")  
        elif (16<= BMI <17):
            print("Moderate Thinness")     
        elif (17<= BMI<18):
            print("Mild Thinness")      
        elif (18<= BMI<25):
            print("Normal")
        elif (25<= BMI<30):
            print("Overweight")
        elif (30<= BMI<35):
            print("Obese Class 1")
        elif (35<= BMI<40):
            print("Obese Class 2")
        elif (BMI<=40):
            print("Obese Class 3")
        else:
            print ("Others")
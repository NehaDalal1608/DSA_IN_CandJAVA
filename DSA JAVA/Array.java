public class Array {
    public static void main(String [] args){
        //declare an aarya
        int intArray[];
        //initialize an array of 8 int
        //initialize memory of 8 int
        intArray=new int[8];
        System.out.println("Array before adding data.");
        //Display elements of an Array
        display(intArray);
   

//opration:insertion
//add elements in the array
for(int i=0;i<intArray.length;i++)
{
    //place value of i at index j.
    System.out.println("Adding"+i+"at index"+i);
    intArray[i]=i;
}
System.out.println();
System.out.println("Array after adding data");
display(intArray);
}
}
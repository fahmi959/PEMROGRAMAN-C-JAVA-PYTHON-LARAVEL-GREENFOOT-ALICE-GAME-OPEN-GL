package Lesson;

public class Lesson602 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		//----------------------------------------------------------------
		//

		int[] numbers = {40, 7, 59, 4, 1};
		int indexMin = 0; //the index of the smallest number
		for(int i = 0; i< numbers.length; i++){
		indexMin = i;
		for(int j = i + 1; j < numbers.length; j++){
		if(numbers[j] < numbers[indexMin]){//if we find a smaller int, set it as the min
		indexMin = j;
		}
		} //we now have the index of the smallest int and can swap the values
		int temp = numbers[i]; //use temp to store the value
		numbers[i] = numbers[indexMin];
		numbers[indexMin] = temp;
		}
		for(int i = 0; i< numbers.length; i++){
		System.out.print(numbers[i] + " ");
		}

		
		//----------------------------------------------------------------
		//

	

		
		//----------------------------------------------------------------
		//

		
		//----------------------------------------------------------------
		//

		
		//----------------------------------------------------------------
		//

		
		//----------------------------------------------------------------
		//

		
		//----------------------------------------------------------------
		//
	
	}

}

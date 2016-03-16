/* Returns either the index of the location in the array,
  or -1 if the array did not contain the targetValue */
var doSearch = function(array, targetValue) {
	var min = 0;
	var max = array.length - 1;
    var guess;
    var tot_guesses = 0;
    
    while (max >= min) {
        guess = floor((max + min) / 2);
        tot_guesses++;
        println("Current guess is: " + guess);
        if (array[guess] === targetValue) {
            println("Total guesses to answer: " + tot_guesses);
            return guess;
        } else if (array[guess] < targetValue) {
            min = guess + 1;
        } else {
            max = guess - 1;
        }
    }
    return -1;
};

var primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 
		41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97];

var result = doSearch(primes, 73);
println("Found prime at index " + result);

Program.assertEqual(doSearch(primes, 73), 20);
Program.assertEqual(doSearch(primes, 11), 4);
Program.assertEqual(doSearch(primes, 83), 22);



/*
This is a copy-pasta of the JavaScript code used on the khan academy code challenge page.
Since I was having a hard-ass time of getting the equivalent C++ stuff right given my lack of
array knowledge. I think I was almost there but, damn, dem arrays...
*/
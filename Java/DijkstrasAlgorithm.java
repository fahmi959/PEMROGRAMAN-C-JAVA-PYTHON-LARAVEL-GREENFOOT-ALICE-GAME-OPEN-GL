class DijkstrasAlgorithm { 

	private static final int NO_PARENT = -1; 

	// Function Algoritma Dijkstra
	private static void dijkstra(int[][] adjacencyMatrix, int startVertex) 
	{ 
		int jumlah_vertex = adjacencyMatrix[0].length; 

		// menyimpan jarak terpendek
		int[] shortestDistances = new int[jumlah_vertex]; 

		// true jika vertex termasuk jalur terpendek / udah di proses
		boolean[] added = new boolean[jumlah_vertex]; 

		// inisialisasi
		for (int vertexIndex = 0; vertexIndex < jumlah_vertex; vertexIndex++) 
		{ 
                    shortestDistances[vertexIndex] = Integer.MAX_VALUE; 
                    added[vertexIndex] = false; 
		} 
		
		// Jarak source ke dirinya sendiri 0
		shortestDistances[startVertex] = 0; 

		// menyimpan jalur yang terpendek
		int[] jalur = new int[jumlah_vertex]; 

		jalur[startVertex] = NO_PARENT; 

		// mencari jalur terpendek untuk setiap vertex
		for (int i = 1; i < jumlah_vertex; i++) 
		{ 
                    int nearestVertex = -1; 
                    int shortestDistance = Integer.MAX_VALUE; 
                    for (int vertexIndex = 0; vertexIndex < jumlah_vertex; vertexIndex++) 
                    { 
                        if (!added[vertexIndex] && shortestDistances[vertexIndex] < shortestDistance) 
                        { 
                            nearestVertex = vertexIndex; 
                            shortestDistance = shortestDistances[vertexIndex]; 
                        } 
                    } 

                    added[nearestVertex] = true; 

                    for (int vertexIndex = 0; vertexIndex < jumlah_vertex; vertexIndex++) 
                    { 
                        int edgeDistance = adjacencyMatrix[nearestVertex][vertexIndex]; 
				
                        if (edgeDistance > 0 && ((shortestDistance + edgeDistance) < shortestDistances[vertexIndex])) 
                        { 
                            jalur[vertexIndex] = nearestVertex; 
                            shortestDistances[vertexIndex] = shortestDistance + edgeDistance; 
                        } 
                    } 
		} 

		printSolusi(startVertex, shortestDistances, jalur); 
	} 

	// print jarak dan membuat jalur
	private static void printSolusi(int startVertex, int[] jarak, int[] jalur) 
	{ 
		int jumlah_vertex = jarak.length; 
		System.out.print("Vertex\t        Jarak\t        Jalur"); 
		
		for (int vertexIndex = 0; 
				vertexIndex < jumlah_vertex; 
				vertexIndex++) 
		{ 
			if (vertexIndex != startVertex) 
			{ 
				System.out.print("\n" + startVertex + " -> "); 
				System.out.print(vertexIndex + " \t\t "); 
				System.out.print(jarak[vertexIndex] + "\t\t"); 
				printJalur(vertexIndex, jalur); 
			} 
		} 
	} 

	// print jalur
	private static void printJalur(int currentVertex, int[] jalur) 
	{ 
		if (currentVertex == NO_PARENT) 
		{ 
                    return; 
		} 
		printJalur(jalur[currentVertex], jalur); 
		System.out.print(currentVertex + " "); 
	} 

	public static void main(String[] args) 
	{ 
		int[][] adjacencyMatrix = { { 0, 2, 4, 0, 0, 0 }, 
                                            { 2, 0, 0, 0, 0, 4 }, 
                                            { 4, 0, 0, 0, 4, 6 }, 
                                            { 0, 0, 0, 0, 0, 0 }, 
                                            { 0, 0, 0, 0, 0, 0 }, 
                                            { 0, 4, 6, 0, 0, 0 }, 
                                            { 0, 8, 7, 0, 0, 1 }, 
                                            { 0, 0, 0, 1, 6, 9 } }; 
		dijkstra(adjacencyMatrix, 3); 
	} 
} 
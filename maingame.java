
public class MainGame {

	private char[][] board;
	
	private char currentPlayer;
	
	public MainGame() {
		
		board = new char[3][3];
		currentPlayer  = 'x';
		initializeBoard();
		
	}
	
	public char getCurrentPlayer() {
		
		return currentPlayer;
		
	}
	
	public void initializeBoard(){
		//loop through rows
		for (int i = 0; i < 3; i++) {
			
			//loop through columns
			for (int j = 0; j < 3; j++) {
				
				board[i][j]='-';
				
			}
		}
	}

	
	public void printBoard() {
		
		//create top row
		System.out.println("-------------");
		
		//create columns for every three
		for (int i = 0; i < 3; i++) {
		
			System.out.print("|");
			
			//creates columns on each row
			for (int j = 0; j < 3; j++) {
				
				System.out.print(board[i][j]+"|");
				
			}
			
			//print bottom
			System.out.println();
			System.out.println("-------------");
		}

	}
	
	public boolean isBoardFull() {
		
		boolean isFull = true;
		
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
			if (board[i][j] == '-') {
				isFull = false;
			}
			}
		}
		
		return isFull;
	}
	
	
	
	public boolean isWinner() {

			
			return(checkRows() || checkColumns() || checkDiagonals());
	}
	
	private boolean checkRows() {
		
		//check rows
		for (int i = 0; i < 3; i++) {
			
			if (checkRowCol(board[i][0], board[i][1], board [i][2]) == true) {
				return true;
			}
			
		}
		
		return false;
			
	}
	
	private boolean checkColumns() {
		
		//check columns
		for (int i = 0; i < 3; i++) {
					
			if (checkRowCol(board[0][i], board[1][i], board [2][i]) == true) {
				return true;
			}
					
		}
		
		return false;
	}
	
	private boolean checkDiagonals() {
		
		return ((checkRowCol(board[0][0], board[1][1], board [2][2]) == true) || (checkRowCol(board[0][2],board[1][1],board[2][0]) == true));
		
	}
	
	private boolean checkRowCol(char c1, char c2, char c3) {
		
		return ((c1!='-') && (c1==c2) && (c2==c3));
		
	}
	
	public void changePlayer() {
		
		if (currentPlayer == 'x'){
			
			currentPlayer = 'o';
		}
		else {
			currentPlayer = 'x';
		}
	}
	
	//HELP
	public boolean placeMark(int row, int col) {
		
		if ((row >= 0) && (row < 3)){
			if ((col >= 0) && (col < 3)) {
			
			
			if (board[row][col] == '-') {
				
				board[row][col] = currentPlayer;
				
				return true;
				
			}
			
		}
		
	}
		
		return false;
	}
	
}

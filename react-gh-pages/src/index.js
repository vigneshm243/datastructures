import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
//class declaration of a square in tic tac toe
// class Square extends React.Component {

//   constructor(props){
//       super(props);
//       this.state = {
//           value : null,
//       };
//   }

//   render() {
//     return (
//       <button 
//         className="square" 
//         onClick = {() => this.props.onClick() }
//       >
//         {this.props.value}
//       </button>
//     );
//   }
// }
/*Square class converted into square function
 thus allowing in to stop usuing this.props 
 and returning just the required rendering 
 as the control of data has now moved to the parent
 */
function Square(props){
    return (
        <button className = "square" onClick = {props.onClick}>
            {props.value};
        </button>
    );
}
/*React Class representation of the TicTacToe
*/
class Board extends React.Component {
    //Construtor with the initiaiztion and setting X as first 
    //removing construtor as we move control over to top
//   constructor(props){
//       super(props);
//       this.state = {
//           //state of the board
//           squares: Array(9).fill(null),
//           //turn of the player
//           xIsNext: true,
//       };
//   }
  //render square function call
  renderSquare(i) {
    return <Square 
        //value passed
        value = {this.props.squares[i]}
        //onclick handler called
        onClick = {() => this.props.onClick(i)}
    />;
  }
// moving to game class
//   handleClick(i) {
//     //array of the square state taken
//     const squares = this.state.squares.slice();
//     //setting value of square clicked based on state of xIsNext
//     squares[i] = this.state.xIsNext ? 'X' : 'O';
//     this.setState({
//         squares: squares,
//         xIsNext: !this.state.xIsNext,
//     });
//   }

  render() {
    const status = 'Next player: ' + (this.state.xIsNext ? 'X' : 'O');

    return (
      <div>
        
        {/* <div className="status">{status}</div> */}
        <div className="board-row">
          {this.renderSquare(0)}
          {this.renderSquare(1)}
          {this.renderSquare(2)}
        </div>
        <div className="board-row">
          {this.renderSquare(3)}
          {this.renderSquare(4)}
          {this.renderSquare(5)}
        </div>
        <div className="board-row">
          {this.renderSquare(6)}
          {this.renderSquare(7)}
          {this.renderSquare(8)}
        </div>
      </div>
    );
  }
}
//Top most class of the react app
class Game extends React.Component {
  constructor(props){
      super(props);
      this.state = {
          history :[{
              suares: Array(9).fill(null),
          }],
          xIsNext: true,
      }
  }
  handleClick(i) {
    const history = this.state.history;
    const current = history[history.length - 1];
    const squares = current.squares.slice();
    if (calculateWinner(squares) || squares[i]) {
      return;
    }
    squares[i] = this.state.xIsNext ? 'X' : 'O';
    this.setState({
      history: history.concat([{
        squares: squares,
      }]),
      xIsNext: !this.state.xIsNext,
    });
  }

  render() {
    return (
      <div className="game">
        <div className="game-board">
          <Board 
            squares = {current.squares}
            onClick = {(i) => this.handleClick(i)}
          />
        </div>
        <div className="game-info">
          <div>{status}</div>
          <ol>{/* TODO */}</ol>
        </div>
      </div>
    );
  }
}   

//To calculate winner of tic tac toe
function calculateWinner(squares) {
  const lines = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6],
  ];
  for (let i = 0; i < lines.length; i++) {
    const [a, b, c] = lines[i];
    if (squares[a] && squares[a] === squares[b] && squares[a] === squares[c]) {
      return squares[a];
    }
  }
  return null;
}
// ========================================

ReactDOM.render(
  <Game />,
  document.getElementById('root')
);

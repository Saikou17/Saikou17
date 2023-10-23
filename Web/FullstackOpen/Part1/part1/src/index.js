import React,{useState} from 'react'
import ReactDOM from 'react-dom'

const Hello = ({name,age}) => {
  const yearBorn = () =>  new Date().getFullYear() - age
  return (
    <div>
      <p>Hello {name}, you are {age} years old</p>
      <p>You were born in {yearBorn()}</p>
  </div>
    
  )
}

const Header = ({course}) => {
  return (<h1>{course}</h1>)
}

const Part = ({part,exercises}) =>{
  return(<p>{part} {exercises}</p>)
}

const Content = ({parts}) => {
  return (
    <div>
      {parts.map((part)=>(<Part part={part.name} exercises={part.exercises}/>))}
    </div>
  )
}

const Total = ({parts}) => {
  const total = parts.reduce((total,part)=>total+part.exercises,0)
  return (
  <p>Number of exercises {total}</p>
  )
}

const History = ({allClicks}) => {
  if (allClicks.length === 0) {
    return (
      <div>
        the app is used by pressing the buttons
      </div>
    )
  }

  return (
    <div>
      button press history: {allClicks.join(' ')}
    </div>
  )
}

const Button = ({ onClick, text }) => (
  <button onClick={onClick}>
    {text}
  </button>
)

const App = () => { //Declaramos una variable constante (no se puede reasignar) que no recibe ningun parametro
  console.log("Creamos un componente")//Este es el print en javascript
  const course = 'Half Stack application development'
  const [good, setGood] = useState(0)
  const [neutral, setNeutral] = useState(0)
  const [bad, setBad] = useState(0)
  const [left, setLeft] = useState(0)
  const [right, setRight] = useState(0)
  const [allClicks, setAll] = useState([])

  const handleLeftClick = () => {
    setAll(allClicks.concat('L'))
    setLeft(left + 1)
  }

  const handleRightClick = () => {
    setAll(allClicks.concat('R'))
    setRight(right + 1)
  }

  const eventGood = () => setGood(good+1)
  const eventNeutral=()=> setNeutral(neutral+1);
  const eventBad= ()=> setBad(bad+1)

  const parts = [
    {
      name: 'Fundamentals of React',
      exercises: 10
    },
    {
      name: 'Using props to pass data',
      exercises: 7
    },
    {
      name: 'State of a component',
      exercises: 14
    }
  ]

  return(
  <div>
    <h1>Greetings!</h1>
    <Hello name="Juan Pablo Cruz" age={10+10}/>
    <Header course={course}/>
    <Content parts={parts}/>
    <Total parts={parts}/>
    <div>
      {left}
      <Button onClick={handleLeftClick} text="left" />
      <Button onClick={handleRightClick} text="right" />
      {right} 
      <History allClicks={allClicks} />
    </div>
    <div>
      <h1>Give Feedback</h1>
      <Button onClick={eventGood} text="Good"/>
      <Button onClick={eventNeutral}text="Neutral"/>
      <Button onClick={eventBad} text="Bad"/> 
      <h1>Statics</h1>
      <p>Good <b>{good}</b></p>
      <p>Neutral <b>{neutral}</b></p>
      <p>Bad <b>{bad}</b></p>
      <p>Total: <b>{good + neutral + bad}</b></p>
      <p>Percent Positive: <b>{(good/(good + neutral + bad))*100}</b></p>
    </div>
  </div>
  )
}

ReactDOM.render(
  <App />,
  document.getElementById('root'))
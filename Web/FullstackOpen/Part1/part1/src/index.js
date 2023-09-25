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

const App = () => { //Declaramos una variable constante (no se puede reasignar) que no recibe ningun parametro
  console.log("Creamos un componente")//Este es el print en javascript
  const course = 'Half Stack application development'
  const [clicks,setClicks] = useState({left:0, right:0})
  const handleLeftClick = () => {
    const newClicks = { 
      left: clicks.left + 1, 
      right: clicks.right 
    }
    setClicks(newClicks)
  }

  const handleRightClick = () => {
    const newClicks = { 
      left: clicks.left, 
      right: clicks.right + 1 
    }
    setClicks(newClicks)
  }
  const decreaseOne = () => setCounter(counter-1);
  const restart = () => setCounter(0);
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
    {clicks.left}
    <button onClick={handleLeftClick}>left</button>
    <button onClick={handleRightClick}>right</button>
    {clicks.right}
  </div>
  )
}

ReactDOM.render(
  <App />,
  document.getElementById('root'))
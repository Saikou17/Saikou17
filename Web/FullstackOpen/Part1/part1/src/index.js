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
  const [counter,setCounter] = useState(0)
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
    <p>{counter}</p>
    <button onClick={()=>setCounter(counter+1)}>Incrementar</button>
    <button onClick={()=>setCounter(0)}>Reiniciar</button>
  </div>
  )
}

ReactDOM.render(
  <App />,
  document.getElementById('root'))
import React from 'react'
import ReactDOM from 'react-dom'

const Hello = (props) => {
  return (
    <p>Hello {props.name}, you are {props.age} years old</p>
  )
}

const Header = (props) => {
  return (<h1>{props.course}</h1>)
}

const Part = (props) =>{
  return(<p>{props.part} {props.exercises}</p>)
}

const Content = (props) => {
  return (
    <div>
      {props.parts.map((part)=>(<Part part={part.name} exercises={part.exercises}/>))}
    </div>
  )
}

const Total = (props) => {
  const total = props.parts.reduce((total,part)=>total+part.exercises,0)
  return (
  <p>Number of exercises {total}</p>
  )
}

const App = () => { //Declaramos una variable constante (no se puede reasignar) que no recibe ningun parametro
  console.log("Creamos un componente")//Este es el print en javascript
  const course = 'Half Stack application development'
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
  </div>
  )
}

ReactDOM.render(
  React.createElement(App,null),
  document.getElementById('root')
)
defmodule Polyglot do
  def validate_hello(greetings) do
    #TODO ...
    greetings = String.downcase(greetings)
    cond do
      String.contains?(greetings,"hello") == true -> true
      String.contains?(greetings,"ciao") == true -> true
      String.contains?(greetings,"salut") == true -> true
      String.contains?(greetings,"hallo") == true -> true
      String.contains?(greetings,"hola") == true -> true
      String.contains?(greetings,"ahoj") == true -> true
      String.contains?(greetings,"czesc") == true -> true
      true -> false
    end
  end
end

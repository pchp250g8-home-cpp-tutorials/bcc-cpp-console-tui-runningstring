RunningString. C++ Tutorials. Embarcadero Rad Studio IDE. Console application. Advanced Console Features. Conio Library. 
The program does the following:
  1. Creates a standard terminal size window (80 columns, 25 rows).
  2. Clears the created window.
  3. Creates the first string variable consisting of 80 spaces.
  4. Creates a second string variable with the value "Hello World!!! Running String!!! Press Any Key To Exit!!!".
  5. The second line is added to the first line twice. The result is a line with 80 spaces to the left and right of the text.
  6. Determines the length of the second line (the number of characters per line). The number 80 (the length of the first line) is subtracted from this length.
  7. Creates a variable for the character number of the string from which to extract a substring of 80 characters.
  8. This variable will be a counter that will change from 0 to the length of the second string variable.
  9. A loop with a postcondition is executed.
      9.1. The first string variable is replaced with a substring of length 80 characters from the second string variable, starting with the character number                 with the counter value.
      9.2. The first string variable is displayed on the screen at position 1 column 1 row.
      9.3. The program pauses for 140 milliseconds.
      9.4. The counter variable is incremented by 1. If its value is greater than the length of the second string, it is set to 0.
      9.5. The loop condition is checked to see if any key is pressed. If not, the loop continues and terminates otherwise.
  10. Exits.

RunningString. Занятия по C++. ИС Embarcadero Rad Studio. Строки. Консольное приложение. Расширенные возможности. Библиотека Conio. 
Программа делает следующее:
  1. Создаёт окно стандартного размера терминала (80 столбцов, 25 строк).
  2. Очищает созданное окно.
  3. Создаёт первую строковую переменную состоящую из 80 пробелов
  4. Создаёт вторую строковую переменную со значением "Hello World!!! Running String!!! Press Any Key To Exit!!!".
  5. Вторая строка складывается с первой дважды. В результате получается строка с 80 пробелами слева и справа от надписи.
  6. Определяет длину второй строки (количество символов в строке). Из этой длины вычтается число 80 (длина первой строки).
  7. Создаёт переменную для номера символа строки, с которого следует выделять подстроку длиной 80 символов.
  8. Эта переменная будет счётчиком, который будет меняться от 0 до значения длины второй строковой переменной.
  9. Выполняется цикл с постусловием.
     9.1. Первая строковая переменная заменяется подстрокой длиной 80 символов из второй строковой переменной, начиная с номера символа со значением счётчика.
     9.2. Первая строковая переменная выводится на экран в позицию 1 столбец 1 строка.
     9.3. Программа делает паузу на 140 милисекунд.
     9.4. Переменная счётчика увеличивается на 1. Если её значение больше длины второй строки она устанавливается в значение равное 0.
     9.5. Проверяется условие цикла: не нажата ли какая-нибудь клавиша. Если нет цикл продолжает работу и завершается в противном случае.
  10. Завершает работу.

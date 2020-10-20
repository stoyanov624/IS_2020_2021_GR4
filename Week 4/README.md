# Практикум #4
## Какво научихме предният път?
* Булеви изрази
* Блок {}, видимост на данни
* if конструкции
* Конструкция ?:
* switch конструкция
## Какво ще научим днес?
* Конструкции за цикли
  * Оператори break и continue
  * Вложени цикли

## Цикли(Loops)
Да предположим, че ваш приятел ви моли да му напишете програма, която извежда първите 10 цели числа по-големи от дадено число х. Какво ще направите? Използвайки, математическо мислене стигаме до тук:
```c++
        #include <iostream>
        using namespace std;
        
        int main()
        {
        	int x;
        
        	cout << "X= ";
		cin >> x;

		cout << x + 1 << endl;
		cout << x + 2 << endl
		cout << x + 3 << endl
		cout << x + 4 << endl
		cout << x + 5 << endl
		cout << x + 6 << endl
		cout << x + 7 << endl
		cout << x + 8 << endl
		cout << x + 9 << endl
		cout << x + 10 << endl
       
       		return 0;
       }
```

Обаче, приятелят ви се е объркал. Искал е да са 10, ама 10 **хиляди**. Е, в такъв случай може отново да изберете горния подход..ще отнеме цяла вечност и ще пишете едно и също 10 000 пъти, с изключение на това че, се сменя само едно число. Да - тъпо и неефективно. Е, какво да правим тогава? Забелязваме, че е налице **повторение на един и същ оператор, докато не се наруши дадено условие.** А това показва, че имаме **цикличност** или още **цикъл**(**loop**). 

### Всеки цикъл се състой от 4 основни части:
#### инициализация(initialization)
Задава се начална стойност на някои променливи, който участват в цикъла. Нарича се още **корекция**.
#### тяло на цикъла(body)
Това е блок, който съдържа операторите, които искаме да се повтарят многократно.
#### актуализация(update)
Обновяват се стойностите на някои от участващите променливи с цел подготовка за следващо изпълнение на тялото.
#### условие за край на цикъла(condition)
Служи за гарантиране прекратяването на цикъла(иначе ще се повтаря "безкрайно").

**Едно изпълнение на тялото на цикъла се нарича *итерация*(iteration).**

## Цикли с предусловие
Циклите с предусловие представляват инструмент, с помощта на когото може да се изпълният дадени действия множество пъти, като преди това се провери дали е изпълнени дадено условие. Ще разгледаме две конструкции с такъв замисъл – for и while.

Блок-схема: 

![alt tag](https://github.com/KristinStefanova/UP_FMI_IS_2017-2018/blob/master/week04/diagrams/Diagram_for.png)

### for конструкция(for statement)
Синтаксис:
```c++
for ( <инициализация>; <условие-за-край>; <актуализация> )
{
	<тяло-на-цикъла>
}
```
Семантика:
Изпълнението започва с инициализирането на стойностти, след което се проверява условието за край, ако то върне резултат true, то се изпълнява тялото на цикъла, след което се изпълняват операциите в актуализация. След това всичко продължава от проверката на условие за край и така, докато това условие върне false и се прекратява изпълнението, продължавайки изпълнението на кода след for конструкцията.

Блок-схема: 

![alt tag](https://github.com/KristinStefanova/UP_FMI_IS_2017-2018/blob/master/week04/diagrams/for.png)

Пример: Отпечатване на числата от 0 до 9
```c++
#include<iostream>

int main()
{
	for (int index = 0; index < 10; index++)
		std::cout << index << " ";

	return 0;
}
```
### While конструкция(while statement)
Синтаксис:
```c++
while (<условие-за-край-булев-израз>)
{
	<тяло-на-цикъла>
}
```

Семантика: Проверява се резултатът от <условие-за-край-булев-израз>, ако върнатата стойност е true тогава се изпълнява <тяло-на-цикъла>, ако върнатият резултат е false - се прекратява изпълнението на while оператора и продължава изпълнението на кода след него. Някъде в тялото на цикъла трябва да има актуализация, в противен случай ще стигнем до безкраен цикъл.

Блок-схема: 

![alt tag](https://github.com/KristinStefanova/UP_FMI_IS_2017-2018/blob/master/week04/diagrams/while%20(1).png)

Пример: Отпечатване на числата от 0 до 9
```c++
#include<iostream>

int main()
{
	int index = 0;

	while (index < 10)
	{	
		std::cout << index << " ";
		index = index + 1; // eq ++index;	
	}

	return 0;
}
```

## Цикли със следусловие
При този вид цикли замисълът е следният: да се изпълни първо тялото на конструкцията и след това да се проверя условието за край. 
Разликата между двете философии (предусловие и следусловие) е, че при втората **винаги ще се изпълни тялото поне веднъж**, а при първата е възможно да не се извърши дори един път.

Блок-схема: 

![alt tag](https://github.com/KristinStefanova/UP_FMI_IS_2017-2018/blob/master/week04/diagrams/Diagram_do_while.png)

### do-while конструкция(do-while statement)

Синтаксис:
```c++
do
{
	<тяло-на-конструкцията>
}
while (<условие-за-край-булев-израз>);
```
#### ОБЪРНЕТЕ ВНИМАНИЕ НА ; СЛЕД WHILE !!!

Семантика: Изпълнява се първо тялото на конструкцията, след което се проверява <условие-за-край-булев-израз>, ако върнатият резултат е true се изпълнява отново тялото на конструкцията в противен случай се прекратява изпълнението на конструкцията. 

Блок-схема: 

![alt tag](https://github.com/KristinStefanova/UP_FMI_IS_2017-2018/blob/master/week04/diagrams/do-while.png)

Пример: Отпечатване на числата от 0 до 9
```c++
#include<iostream>

int main()
{
	int index = 0;
	
	do
	{
		std::cout << index << " ";
		index++; 		
	} 
	while (index < 10);
	

	return 0;
}
```

### NB!
#### При циклите while и do-while инициализаацията се извършва извън конструкцията за цикъл. Във всяка една конструкция, всеки един елемент от 4-те може да бъде пропуснат, но понякога цената е неработеща програма. Внимавайте! Проверявайте дали имате случай при когото ще бъде прекъснато изпълнението. В противен случай ще попаднете в безкраен цикъл;  

### Оператор break (break statement)
Да предположим, че в редица от числа търсим числото 7. Например редицата:
​	
	1 29 3 5 7 11 56 96 4

Започваме да сравняваме последователно числата от редицата с нашето число-7. Както забелязваме, числото 7 се намира в средата на редицата. Е, намерихме го! Нужно ли е след като сме намерили 7 да продължаваме да търсим? - Не. Как се прекратява търсенето. В програмирането използваме оператора break. Вече го видяхме при оператора **switch**. Тук обаче, **break** се използва, когато искаме **принудително** да приключим цикъл. 

```c++
#include <iostream>
using namespace std;

int main()
{

	int temp_number;
	int size_of_sequence;

	cin >> size_of_sequence;
	for (int i = 0; i < size_of_sequence; i++)
	{
		cin >> temp_number;
		if (temp_number == 7)
		{
			cout << "You're lucky! " << endl;
			break;
		}
	}

	return 0;
}
```


### Помощни флагове (flags)
Освен **break**, можем да използваме помощни флагове(flags). Такава променлива(**flag**) служи да маркира промяната на някакво условие, като сменя стойността си от 0 на 1 и обратното. Да, добре е флаговете да са от тип **bool**.  

```c++
#include <iostream>
using namespace std;

int main()
{

	int temp_number;
	int size_of_sequence;
	bool flag = false; // свалили сме флага

	cin >> size_of_sequence;

	for (int i = 0; i < size_of_sequence && !flag; i++)
	{
		cin >> temp_number;
		if (temp_number == 7)
		{
			cout << "You're lucky! " << endl;
			flag = true; // вдигаме флага, така ще прекратим цикъла
		}
	}

	if (flag == false) // уведомяваме потребителя, че не сме намерили 7
		cout << "Sorry! :( " << endl;

	return 0;
}
```

### Оператор continue (continue statement)
Докато операторът **break** предлага удобен и лесен начин за **прекратяване на целия цикъл**, то операторът **continue** предлага удобен начин за **прекратяване на текущата итерация**, т.е. прескача се частта от тялото на цикъла, която се намира след оператора continue. 
Пример: В редица от 10 числа искаме да преброим броя на числата, които са нечетни

```c++
#include <iostream>
using namespace std;

int main()
{

	int temp_number;
	int counter = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> temp_number;
		if (temp_number % 2 == 0)
			continue;
		counter++;
	}
	
	cout << "Odd numbers are: " << counter << endl;
	
	return 0;
}
```


​        
### Вложени цикли (Nested loops)
Когато в тялото на кои да е цикъл се съдържа друг цикъл, казваме че имаме **вложени цикли**(**nested loops**). Най-често се използват, когато работим с таблици от числа(**матрици**). Можем да влагаме колкото цикли пожелаем. Когато имаме само 2 цикъла, единият се нарича **външен**, а другия **вътрешен**. Moже вложените цикли да са с различни конструкции. 

Пример: Отпечатване на числата от 1 до 9 в решетка
```c++
#include <iostream>
using namespace std;


int main()
{
	int k = 1;
	for (int i = 0; i < 3; i++) // външен
	{
		for (int j = 0; j < 3; j++) // вътрешен
		{
			cout << k ;
			k++;
		}
		cout << endl;
	}

	return 0;
}
```
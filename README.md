Это репозиторий для программы Stack - базы даннных с защитой от взлома. Для работы со стэком созданы функции create_stack, push_stack, pop_stack, dump_stack и destroy_stack.

В качестве функции проверки используется chech_stack, также используется функция хеширование hash_stack, она использует довольно простой алгоритм, придуманный мной самим, он использует сдвиг вправо и сумму.

В данной программе не используются макросы, так как их использование было сочтено небезопасным (был придуман метод, как с помощью уже существующих макросов и из переобозначения вщломать стэк).

В будущем планируется убрать весь код из библиотечного файла и переложить его в файл с названием stack.c.
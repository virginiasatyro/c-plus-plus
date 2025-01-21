# C++ Como Programar

## Caítulo 10 - Classes: Um Exame Mais Profundo

### Objetos ```const```

Enfatizamos o princípio do menor privilégio como um dos mais fundamentais da boa engenharia de software.

Alguns objetos precisam ser modificáveis e alguns não. O programador pode utilizar a palavra chave ```const``` para especificar que um objeto não é modificável e que qualquer tentativa de modificá-lo deve resultar em um erro de compilação.

Declarar um objeto como ```const``` ajuda a import o princípio do menor privilégio. Pode também melhorar o desempenho.

### Composição: Objetos Como Membros de Classes

Um construtor pode passar argumentos para construtores de objeto-membro, o que é realizado via inicializadores de membro.

```C
date.h
date.cpp
employee.h
employee.cpp
```

### Funções ```friend``` e Classe ```friend```

Uma função ```friend``` de uma classe é definida fora do escopo dessa classe, ainda que tenha o direito de acessar membros não-```public``` (e ```public```) da classe. Funções independentes ou classes inteiras podem ser declaradas como amigas de outras classes.

Utilizar ```friend``` pode aprimorar o desempenho.

Mesmo que os protótipos para funções ```friend``` apareçam na definição de classe, as funções amigas não são funções-membro.
Boa prática: colocar todas as declarações em primeiro lugar dentro do corpo da definição de classe e não as preceda com nenhum especificador de acesso.

```friend.cpp```

### Utilizando o ponteiro ```this```

Como as funções-membro sabem quais membros de dados do objeto devem manipular? Cada objeto tem acesso ao seu próprio endereço por um ponteiro chamado ```this```.
O ponteiro ```this``` e um objeto não faz parte do objeto em si - isto é, o tamanho da memória ocupado pelo ponteiro ```this``` não é refletido no resultado de uma operação ```sizeof``` do objeto. Em vez disso, o ponteiro é passado (pelo compilador) como um argumento implícito para cada uma das funções-membro não-```static``` do objeto.

Os objetos utilizam o ponteiro ```this``` implicitamente ou explicitamente para referenciar seus membros de dados e funções-membro.

```this.cpp```

### Gerenciamento de Memória Dinâmico com os Operadore ```new``` e ```delete```

C++ permite aos programadores controlar a alocação e desalocação de memória em um programa de qualquer tipo predefinido ou definido pelo usuário. Isso é conhecido como __gerenciamento de memória dinâmico__ e é realizado com operadores ```new``` e ```delete```.

Podemos utilizar o operador ```new``` para __alocar__ dinamicamente (reservar) a quantidade exata de memória necessária para armazenar todos os nomes em tempo de execução. Alocar memória dinamicamente desse modo faz com que um array (ou qualquer tipo definido) seja criado no __armazenamento livre__ (às vezes chamado __heap__) - uma região da memória atribuída a cada programa para armazenar objetos em tempo de execução. Uma vez que a memória de um array é alocada no armazenamento livre, podemos ganhar acesso a ela apontando um ponteiro para o primeiro elemento do array. Quando não precisamos mais dos arrays, podemos retornar a memória ao armazenamento livre utilizando o operador ```delete``` para __desalocar__ (liberar) a memória, que então pode ser reutilizada por futuras operações ```new```.

```/time_cascata```

### Membros de classe ```static```

Há uma exceção importante à regra que diz que cada objeto de uma classe tem sua própria cópia de todos os membros de dados da  classe. Em certos casos, apenas uma cópia de uma variável deve ser compartilhada por todos os objetos de uma classe. Um __membro de dados```static```__ é utilizado por essas e outras razões. Essa variável representa informações no 'nível da classe' (isto é, uma propriedade da classe compartilhada por todas as instâncias, não uma propriedade de um objeto específico da classe).

Exemplo: suponha que tivéssemos um video-game com ```Martians``` e outras criatura do espaço. Cada ```Martian``` tende a ser corajoso e a atacar outras criaturas espaciais quando o ```Martian``` está ciente de que há pelo menos cinco ```Martians``` presentes. Se menos de cinco estivessem presentes, cada ```Martian``` individualmente se torna um covarde. Assim, cada ```Martian``` precisa saber a ```martianCount```. Poderíamos fornecer a cada instância da classe ```Martian``` um ```martianCount``` como um membro de dados. Nesse caso, cada ```Martian``` terá uma cópia separada do membro de dados. Toda vez que criamos um novo ```Martian```, teremos de atualizar o membro de dados ```martianCount``` em todos os objetos ```Martian```. Isso exigiria que cada objeto ```Martian```tivesse, ou acessasse, handles para todos os outros objetos na memória. Isso desperdiça espaço, com cópias redundantes, e tempo, atualizando as cópias separadas. Em vez disso, declaramos que ```martianCount``` será ```static```. Isso faz dados de escopo de classe ```martianCount```. Todo ```Martian``` pode acessar ```martianCount``` como se fosse um membro de dados do ```Martian```, mas apenas uma cópia da variável ```static martianCount``` é mantida pelo C++. Isso economiza espaço. Como há somente uma cópia, não temos de incrementar ou decrementar cópias separadas de ```martianCount``` para cada objeto ```Martian```.

### Abstração de Dados

#### Tipos Abstratos de Dados

Tipos como ```int```, ```double``` e ```char``` e outros são exemplos de tipos de dados abstratos. Eles são essencialmente maneiras de representar noções do mundo real em algum nível satisfatório de precisão dentro de um sistema de computador.

Um tipo abstrato de dados na realidade captura duas noções: uma __representação de dados__ e as __operações__ que podem ser realizadas nesses dados.

Exemplos:

- tipo de dados abstrato ```array```

- tipo de dados abstrato ```string```

- tipo de dados abstrato ```queue```

### Classes Contêiners e Iteradores

Entre os tipos de classes mais populares estão as __classes contêiners__ (classes coleção), isto é, classes projetadas para armazenar coleções de objetos. Essas classes fornecem comumente serviços como inserção, exclusão, pesquisa, classificação e teste de um item para determinar se ele é ou não um membro da coleção.

Os arrays, pilhas, filas, árvores e listas vinculadas são exemplos de classes contêiners.

É comum associar __objetos iteradores__ - ou __iteradores__ - com classes contêiners. O iterador é um objeto que 'percorre' uma coleção, retornando o próximo item (ou realizando alguma ação nele).

### Classes Proxy

Dois princípios fundamentais da boa prática de engenharia de software: separar a interface da implementação e ocultar detalhes da implementação. A classe __proxy__ permite ocultar dos clientes de uma classe até mesmo os dados ```private``` dessa class (esconde até mesmo essa informação que parece estar bem guardada no arquivo de .h).

Definimos uma classe proxy chamada ```Interface```. O único membro ```private``` da classe ```proxy``` é um ponteiro para um objeto ```Implementation```. Note que as únicas menções na classe ```Interface``` à classe ```Implementation``` proprietária estão na declaração de ponteiro e uma __declaração de classe antecipada__.

```/proxy```
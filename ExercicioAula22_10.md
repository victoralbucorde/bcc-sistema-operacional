
**Objetivo**: Nesta atividade, cada dev explorar os sistemas de arquivos no Windows, manipulando arquivos e diretórios, analisando o uso de espaço em disco, e compreendendo como o sistema gerencia esses recursos sem a necessidade de privilégios de administrador.  

**Parte 1: Manipulação Básica de Arquivos e Diretórios**  

Criação de Diretórios e Arquivos

-   Usando o Prompt de Comando ou o Windows PowerShell, crie uma estrutura de diretórios e arquivos.

Comandos que podem ser utilizados:

-   Criar um diretório: mkdir projetos
-   Criar subdiretórios dentro de "projetos": mkdir projetos\trabalho1 e mkdir projetos\trabalho2
-   Criar arquivos de texto vazios: type nul > projetos\trabalho1\arquivo1.txt

Adicionar conteúdo aos arquivos: echo "Conteúdo do arquivo" > projetos\trabalho1\arquivo1.txt

Listagem e Verificação dos Arquivos

-   Usar o comando dir para listar o conteúdo dos diretórios e verificar os arquivos criados.
-   Exemplo: dir projetos\trabalho1

Comparar o tamanho dos arquivos e observar o espaço utilizado. Discuta como o Windows aloca espaço em disco para os arquivos.

**Parte 2: Analisando o Uso de Espaço em Disco**

Análise do Espaço Ocupado

-   Use o comando dir com a opção /S para listar o espaço ocupado por todos os arquivos e subdiretórios de uma pasta.
-   Exemplo: dir projetos /S

Verificação de Propriedades do Sistema de Arquivos  

-   Clique com o botão direito em um arquivo ou pasta, escolher Propriedades e analisar o tamanho do arquivo vs. espaço em disco utilizado.

Responda:

-   Por que o tamanho real do arquivo é menor ou igual ao espaço em disco utilizado?
-   Como o sistema de arquivos do Windows (NTFS) gerencia esse espaço?

**Parte 3: Exploração de Comandos Úteis no Windows**

Busca e Filtragem de Arquivos

-   Usando o Prompt de Comando ou o PowerShell, os alunos devem buscar por arquivos dentro de uma pasta específica com determinados critérios.
-   Exemplo de comando: dir /S /P *.txt para buscar por todos os arquivos de texto em uma pasta.

Use o comando findstr para buscar palavras ou padrões de texto dentro dos arquivos.

-   Exemplo: findstr "palavra_chave" projetos\trabalho1\*.txt

**Parte 4: Backup Simples e Compressão de Arquivos**

Criação de Backups e Compressão

-   Usando o comando xcopy, faça uma cópia dos arquivos e diretórios criados em uma nova pasta.
-   Exemplo: xcopy projetos backup_projetos /E /I

Use a funcionalidade de compressão de arquivos do Windows:

-   Clique com o botão direito em uma pasta ou conjunto de arquivos e selecione Enviar para > Pasta compactada (zipada).

**Entrega**  

Cada aluno deve entregar um relatório com:

-   O conjunto de comandos utilizados durante a atividade, com prints do Prompt de Comando ou PowerShell.
-   Uma análise sobre o que foi observado em relação ao uso de espaço em disco e a organização dos arquivos.
-   Reflexões sobre o funcionamento do sistema de arquivos e a eficiência das técnicas de backup e compressão.**Objetivo**: Nesta atividade, cada dev explorar os sistemas de arquivos no Windows, manipulando arquivos e diretórios, analisando o uso de espaço em disco, e compreendendo como o sistema gerencia esses recursos sem a necessidade de privilégios de administrador.  

---

# Relatório



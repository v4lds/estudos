INSERT INTO pessoas
(id, nome, nascimento, sexo, peso, altura, nacionalidade)
VALUES
(DEFAULT,'Não Sei', '2022-02-22', 'M', '22','2.22','Inglaterra'),
(DEFAULT,'Copia', '2033-03-03', 'M', '33.3','3.30','Suíça'),
(DEFAULT,'Repetido', '1011-01-11', 'M', '11','1.11','Holanda');

select * from pessoas;

alter table pessoas
add column profissao varchar(10);

alter table pessoas
add column profissao varchar(10) AFTER nome;

alter table pessoas
add codigo int FIRST;

alter table pessoas
modify profissao varchar(20);

alter table pessoas
change column profissao prof varchar(20);

alter table pessoas
rename to cadastros;

alter table pessoas
drop column profissao;

desc cadastros;

select *from pessoas;

create table if not exists tabela (
	nome varchar(30) NOT NULL UNIQUE,
    descricao text,
	carga int unsigned,
    totaulas int,
    ano year DEFAULT '2022'
) default charset = utf8mb4;

desc cursos;

alter table cursos
add  idcurso int first;

alter table cursos
add primary key (idcurso);

drop table if exists tabela;
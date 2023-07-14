create table curso (
id_curso int primary key,
d_inicio date,
d_fim date,
id_area int
);

create table professor(
id_prof int primary key,
nome varchar(50),
d_nasc date);

create table areatec(
id_area int primary key,
descricao varchar(100));

create table ministra_em(
num_prof int,
num_curso int);






alter table ministra_em add constraint prof_fk foreign key (num_prof)
references professor(id_prof) on update cascade on delete cascade;

alter table ministra_em add constraint curso_fk foreign key (num_curso)
references curso(id_curso) on update cascade on delete cascade;

alter table curso add constraint area_fk foreign key (id_area)
references areatec(id_area) on update cascade on delete set null;

alter table curso add constraint datainicio check (d_inicio >= current_date);

insert into curso(id_curso, d_inicio, d_fim, id_area) values (1, '2022-10-10', '2022-12-12', 100);

insert into professor(id_prof, nome, d_nasc) values (10, 'Joao', '1945-01-01');

insert into areatec(id_area, descricao) values (100, 'Informática');

insert into curso(id_curso, d_inicio, d_fim, id_area) values (11, '2022-04-18', '2022-12-12', 202);
insert into curso(id_curso, d_inicio, d_fim, id_area) values (2, '2022-04-21', '2022-12-12', 303);
insert into curso(id_curso, d_inicio, d_fim, id_area) values (3, '2022-05-11', '2022-12-12', 404);
insert into curso(id_curso, d_inicio, d_fim, id_area) values (4, '2022-08-04', '2022-12-12', 505);
insert into curso(id_curso, d_inicio, d_fim, id_area) values (5, '2023-01-10', '2022-12-12', 101);

insert into professor(id_prof, nome, d_nasc) values (10, 'Humberto Moura', '1982-05-24');
insert into professor(id_prof, nome, d_nasc) values (20, 'Paulo Silva', '1977-04-30');
insert into professor(id_prof, nome, d_nasc) values (30, 'Roberta Cavalcanti', '1989-06-14');
insert into professor(id_prof, nome, d_nasc) values (40, 'Marta Souza', '1980-03-16');
insert into professor(id_prof, nome, d_nasc) values (50, 'Thalles Radini', '1990-01-21');

insert into areatec(id_area, descricao) values (101, 'Instalação');
insert into areatec(id_area, descricao) values (202, 'Automação');
insert into areatec(id_area, descricao) values (303, 'ADS');
insert into areatec(id_area, descricao) values (404, 'Laboratório');
insert into areatec(id_area, descricao) values (505, 'Vendas');


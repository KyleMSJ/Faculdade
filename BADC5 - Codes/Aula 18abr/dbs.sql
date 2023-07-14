--
-- PostgreSQL database cluster dump
--

SET default_transaction_read_only = off;

SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;

--
-- Roles
--

CREATE ROLE dbadm_leo;
ALTER ROLE dbadm_leo WITH NOSUPERUSER INHERIT CREATEROLE NOCREATEDB LOGIN NOREPLICATION NOBYPASSRLS PASSWORD 'SCRAM-SHA-256$4096:GsfVfjPAvZb1heh3mxxwbA==$l4HvaCY+CwP/IHvO6OuhPgFea9jifYf7GSrwvAi7maA=:45fHkXdDEnYkdMtMA9tkAhtyvOSS1ealqU3cjoUKT4o=';
CREATE ROLE postgres;
ALTER ROLE postgres WITH SUPERUSER INHERIT CREATEROLE CREATEDB LOGIN REPLICATION BYPASSRLS PASSWORD 'SCRAM-SHA-256$4096:ZoFX8SMo3xfUMSRdj9lKZg==$rkyqWPm3P5IVeM8eXKgYmOQA6fYFttL+Vk8sadZ6s98=:u/Z+bvkNIaiDMFa6oGf7+5xmVqx2DBwpB1gdvdDqw/c=';
CREATE ROLE u1;
ALTER ROLE u1 WITH NOSUPERUSER INHERIT NOCREATEROLE NOCREATEDB LOGIN NOREPLICATION NOBYPASSRLS PASSWORD 'SCRAM-SHA-256$4096:wvI/hiAWV8vnCSzivFWtBg==$8MeT6pPOd5wDuXyNhE1a/M2OpedV/b9gZ887Dakylj0=:z1Uz2EjegnmlIYfOn8u3OuzL49+9vC0hGhHJAUSwevc=';
CREATE ROLE u2;
ALTER ROLE u2 WITH NOSUPERUSER INHERIT NOCREATEROLE NOCREATEDB LOGIN NOREPLICATION NOBYPASSRLS PASSWORD 'SCRAM-SHA-256$4096:HTppkm8JjPWNbNrSuWpehQ==$xmKS2uwWTjahi9mXFGCnmB2Ooc6hUMC6mDITViZqs0Y=:0IDBmImqHgHwimI61Edh9GPghph8mqOoClxCz4YbHuk=';
CREATE ROLE u3;
ALTER ROLE u3 WITH NOSUPERUSER INHERIT NOCREATEROLE NOCREATEDB LOGIN NOREPLICATION NOBYPASSRLS PASSWORD 'SCRAM-SHA-256$4096:uUAo0yK/KDIO2tae1mUV+A==$8Nmtqah/j9s0IJwcwGKvBOmeCXfTEnJWuYTLC2gBqpg=:+/052IOAi1RMWA4RLUQfZImkTG75hJNFvtwwfmKP3jo=';






--
-- Databases
--

--
-- Database "template1" dump
--

\connect template1

--
-- PostgreSQL database dump
--

-- Dumped from database version 14.2
-- Dumped by pg_dump version 14.2

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

--
-- PostgreSQL database dump complete
--

--
-- Database "cursotecnico" dump
--

--
-- PostgreSQL database dump
--

-- Dumped from database version 14.2
-- Dumped by pg_dump version 14.2

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

--
-- Name: cursotecnico; Type: DATABASE; Schema: -; Owner: dbadm_leo
--

CREATE DATABASE cursotecnico WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE = 'Portuguese_Brazil.1252';


ALTER DATABASE cursotecnico OWNER TO dbadm_leo;

\connect cursotecnico

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

--
-- Name: tb; Type: SCHEMA; Schema: -; Owner: dbadm_leo
--

CREATE SCHEMA tb;


ALTER SCHEMA tb OWNER TO dbadm_leo;

--
-- Name: vw; Type: SCHEMA; Schema: -; Owner: dbadm_leo
--

CREATE SCHEMA vw;


ALTER SCHEMA vw OWNER TO dbadm_leo;

SET default_tablespace = '';

SET default_table_access_method = heap;

--
-- Name: nome; Type: TABLE; Schema: public; Owner: u3
--

CREATE TABLE public.nome (
    id integer NOT NULL
);


ALTER TABLE public.nome OWNER TO u3;

--
-- Name: areatec; Type: TABLE; Schema: tb; Owner: u1
--

CREATE TABLE tb.areatec (
    id_area integer NOT NULL,
    descricao character varying(100)
);


ALTER TABLE tb.areatec OWNER TO u1;

--
-- Name: curso; Type: TABLE; Schema: tb; Owner: u1
--

CREATE TABLE tb.curso (
    id_curso integer NOT NULL,
    d_inicio date,
    d_fim date,
    id_area integer,
    CONSTRAINT datainicio CHECK ((d_inicio >= CURRENT_DATE))
);


ALTER TABLE tb.curso OWNER TO u1;

--
-- Name: ministra_em; Type: TABLE; Schema: tb; Owner: u1
--

CREATE TABLE tb.ministra_em (
    num_prof integer,
    num_curso integer
);


ALTER TABLE tb.ministra_em OWNER TO u1;

--
-- Name: professor; Type: TABLE; Schema: tb; Owner: u1
--

CREATE TABLE tb.professor (
    id_prof integer NOT NULL,
    nome character varying(50),
    d_nasc date
);


ALTER TABLE tb.professor OWNER TO u1;

--
-- Data for Name: nome; Type: TABLE DATA; Schema: public; Owner: u3
--

COPY public.nome (id) FROM stdin;
\.


--
-- Data for Name: areatec; Type: TABLE DATA; Schema: tb; Owner: u1
--

COPY tb.areatec (id_area, descricao) FROM stdin;
505	Vendas
101	Instala‡Æo
202	Automa‡Æo
303	ADS
404	Laborat¢rio
100	Inform tica
\.


--
-- Data for Name: curso; Type: TABLE DATA; Schema: tb; Owner: u1
--

COPY tb.curso (id_curso, d_inicio, d_fim, id_area) FROM stdin;
11	2022-04-18	2022-12-12	202
2	2022-04-21	2022-12-12	303
3	2022-05-11	2022-12-12	404
4	2022-08-04	2022-12-12	505
5	2023-01-10	2022-12-12	101
1	2022-10-10	2022-12-12	100
12	2022-07-01	2023-07-01	202
13	2022-07-01	2023-12-12	303
14	2022-07-01	2023-12-12	404
15	2022-07-01	2023-12-12	505
16	2023-07-01	2023-12-12	101
6	2022-08-25	2023-10-12	202
7	2022-08-27	2023-10-12	303
8	2022-09-21	2023-11-13	404
9	2022-09-24	2023-11-15	505
17	2022-08-25	2023-11-15	202
18	2022-08-27	2023-10-12	303
19	2022-09-21	2023-11-13	404
20	2022-09-24	2023-11-15	505
10	2022-09-30	2023-11-18	101
\.


--
-- Data for Name: ministra_em; Type: TABLE DATA; Schema: tb; Owner: u1
--

COPY tb.ministra_em (num_prof, num_curso) FROM stdin;
10	1
10	2
20	1
20	2
30	2
30	1
40	11
40	12
50	11
50	12
60	13
60	14
70	15
70	16
80	14
80	15
90	16
90	5
1	2
1	4
2	5
2	11
\.


--
-- Data for Name: professor; Type: TABLE DATA; Schema: tb; Owner: u1
--

COPY tb.professor (id_prof, nome, d_nasc) FROM stdin;
10	Humberto Moura	1982-05-24
20	Paulo Silva	1977-04-30
30	Roberta Cavalcanti	1989-06-14
40	Marta Souza	1980-03-16
50	Thalles Radini	1990-01-21
1	Joao	1945-01-01
60	Ricardo Souza	1982-05-25
70	D‚bora Cristina	1997-04-12
80	Rom rio Abreu	1987-06-24
90	Neymar da Silva	1982-03-16
2	Jules Foster	1990-01-28
110	Jos‚ Cardoso	1986-08-23
170	Antonia Carmo	1990-09-03
180	Aline Santos	1988-06-10
190	Jos‚ da Silva	1967-09-13
100	Marina Nato	1976-03-16
120	Marlene Cardoso	1988-05-23
130	Suelen Dias	1989-11-09
140	Maria Antonia	1986-04-08
150	Ivan Oliveira	1986-07-24
160	Nathan Moreira	1985-02-10
\.


--
-- Name: nome nome_pkey; Type: CONSTRAINT; Schema: public; Owner: u3
--

ALTER TABLE ONLY public.nome
    ADD CONSTRAINT nome_pkey PRIMARY KEY (id);


--
-- Name: areatec areatec_pkey; Type: CONSTRAINT; Schema: tb; Owner: u1
--

ALTER TABLE ONLY tb.areatec
    ADD CONSTRAINT areatec_pkey PRIMARY KEY (id_area);


--
-- Name: curso curso_pkey; Type: CONSTRAINT; Schema: tb; Owner: u1
--

ALTER TABLE ONLY tb.curso
    ADD CONSTRAINT curso_pkey PRIMARY KEY (id_curso);


--
-- Name: professor professor_pkey; Type: CONSTRAINT; Schema: tb; Owner: u1
--

ALTER TABLE ONLY tb.professor
    ADD CONSTRAINT professor_pkey PRIMARY KEY (id_prof);


--
-- Name: curso area_fk; Type: FK CONSTRAINT; Schema: tb; Owner: u1
--

ALTER TABLE ONLY tb.curso
    ADD CONSTRAINT area_fk FOREIGN KEY (id_area) REFERENCES tb.areatec(id_area) ON UPDATE CASCADE ON DELETE SET NULL;


--
-- Name: ministra_em curso_fk; Type: FK CONSTRAINT; Schema: tb; Owner: u1
--

ALTER TABLE ONLY tb.ministra_em
    ADD CONSTRAINT curso_fk FOREIGN KEY (num_curso) REFERENCES tb.curso(id_curso) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: ministra_em prof_fk; Type: FK CONSTRAINT; Schema: tb; Owner: u1
--

ALTER TABLE ONLY tb.ministra_em
    ADD CONSTRAINT prof_fk FOREIGN KEY (num_prof) REFERENCES tb.professor(id_prof) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- Name: SCHEMA tb; Type: ACL; Schema: -; Owner: dbadm_leo
--

GRANT ALL ON SCHEMA tb TO u1;
GRANT USAGE ON SCHEMA tb TO u2; 
GRANT USAGE ON SCHEMA tb TO u3;


--
-- Name: SCHEMA vw; Type: ACL; Schema: -; Owner: dbadm_leo
--

GRANT ALL ON SCHEMA vw TO u1; -- USAGE + CREATE
GRANT USAGE ON SCHEMA vw TO u2;
GRANT USAGE ON SCHEMA vw TO u3;


--
-- Name: TABLE areatec; Type: ACL; Schema: tb; Owner: u1
--

GRANT SELECT,INSERT,UPDATE ON TABLE tb.areatec TO u2;
GRANT SELECT,INSERT,UPDATE ON TABLE tb.areatec TO u3;
GRANT SELECT,INSERT,UPDATE ON TABLE tb.areatec TO dbadm_leo;


--
-- Name: TABLE curso; Type: ACL; Schema: tb; Owner: u1
--

GRANT SELECT,INSERT,UPDATE ON TABLE tb.curso TO u2;
GRANT SELECT,INSERT,UPDATE ON TABLE tb.curso TO u3;
GRANT SELECT,INSERT,UPDATE ON TABLE tb.curso TO dbadm_leo;


--
-- Name: TABLE ministra_em; Type: ACL; Schema: tb; Owner: u1
--

GRANT SELECT,INSERT,UPDATE ON TABLE tb.ministra_em TO u2;
GRANT SELECT,INSERT,UPDATE ON TABLE tb.ministra_em TO u3;
GRANT SELECT,INSERT,UPDATE ON TABLE tb.ministra_em TO dbadm_leo;


--
-- Name: TABLE professor; Type: ACL; Schema: tb; Owner: u1
--

GRANT SELECT,INSERT,UPDATE ON TABLE tb.professor TO u2;
GRANT SELECT,INSERT,UPDATE ON TABLE tb.professor TO u3;
GRANT SELECT,INSERT,UPDATE ON TABLE tb.professor TO dbadm_leo;


--
-- PostgreSQL database dump complete
--

--
-- Database "postgres" dump
--

\connect postgres

--
-- PostgreSQL database dump
--

-- Dumped from database version 14.2
-- Dumped by pg_dump version 14.2

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

--
-- Name: adminpack; Type: EXTENSION; Schema: -; Owner: -
--

CREATE EXTENSION IF NOT EXISTS adminpack WITH SCHEMA pg_catalog;


--
-- Name: EXTENSION adminpack; Type: COMMENT; Schema: -; Owner: 
--

COMMENT ON EXTENSION adminpack IS 'administrative functions for PostgreSQL';


--
-- PostgreSQL database dump complete
--

--
-- PostgreSQL database cluster dump complete
--


-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 15-Dez-2021 às 04:55
-- Versão do servidor: 10.4.21-MariaDB
-- versão do PHP: 8.0.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `material_construcao`
--

-- --------------------------------------------------------
CREATE DATABASE material_construcao10;

use material_construcao10;
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `cliente`
--

CREATE TABLE `cliente` (
  `CPF` char(14) NOT NULL,
  `nome` varchar(60) NOT NULL,
  `CEP` varchar(10) DEFAULT NULL,
  `cidade` varchar(40) DEFAULT NULL,
  `estado` int(30) NOT NULL,
  `numero` varchar(4) DEFAULT NULL,
  `telefone` varchar(15) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `cliente`
--

INSERT INTO `cliente` (`CPF`, `nome`, `CEP`, `cidade`, `estado`, `numero`, `telefone`) VALUES
('031.428.223-45', 'Joao Carlos', '13800-940', 'Piracicaba', 'SP', '321', '(19) 3233-4458'),
('460,332,420-12', 'Debora Andrade', '40023-021', 'Sumare', 'SP', '130', '(19) 3284-8872'),
('532.246.595-80', 'Paulo Ribeiro', '53206-500', 'São Carlos', 'SP', '5698', '(19) 5365-5674');

-- --------------------------------------------------------

--
-- --------------------------------------------------------

--
-- Estrutura da tabela `funcionario`
--

CREATE TABLE `funcionario` (
  `CPF` char(14) NOT NULL,
  `nome` varchar(60) NOT NULL,
  `CEP` varchar(10) DEFAULT NULL,
  `cidade` varchar(40) DEFAULT NULL,
  `estado` varchar(2) NOT NULL,
  `numero` varchar(4) DEFAULT NULL,
  `telefone` varchar(15) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `funcionario`
--

INSERT INTO `funcionario` (`CPF`, `nome`, `telefone`, `CEP`, `cidade`, `estado`, `numero`) VALUES
('521.184.847-80', 'José da Silva', '(21) 2198-5102', '15905-801', 'Altarima', 'PA', '4879'),
('543.487.514-80', 'Pedro', '(54) 9712-5058', '59688-200', 'Tefé', 'AM', '5985'),
('456.874.569-80', 'Maria', '(15) 9587-8426', '59532-511', 'Piracicaba', 'SP', '5925');

-- --------------------------------------------------------

--
-- Estrutura da tabela `itempedido`
--

CREATE TABLE `itempedido` (
  `itempedidoid` int(11) NOT NULL,
  `pedidoid` int(11) NOT NULL,
  `produtoid` int(11) NOT NULL,
  `itempedidoquantidade` double NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

INSERT INTO `itempedido` (`itempedidoid`, `pedidoid`, `produtoid`, `itempedidoquantidade`) VALUES
(1, 1, 6523, 2),
(2, 2, 302046, 3),
(3, 3, 6597, 4);
-- --------------------------------------------------------

--
-- Estrutura da tabela `pedido`
--

CREATE TABLE `pedido` (
  `id` int(11) NOT NULL,
  `idCliente` char(14) NOT NULL,
  `dataPedido` date NOT NULL,
  `idFuncionario` char(14) NOT NULL,
  `valorTotal` double NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

INSERT INTO `pedido` (`id`, `idCliente`, `dataPedido`, `idFuncionario`, `valorTotal`) VALUES
(1, '031.428.223-45', '2010-10-12', '521.184.847-80', 975.57),
(2, '460,332,420-12', '2010-10-12', '543.487.514-80', 831.62),
(3, '532.246.595-80', '2012-10-12', '456.874.569-80', 303.77);
-- --------------------------------------------------------

--
-- Estrutura da tabela `produto`
--

CREATE TABLE `produto` (
  `numero` char(8) NOT NULL,
  `nome` varchar(50) NOT NULL,
  `descricao` varchar(255) DEFAULT NULL,
  `preco` double NOT NULL,
  `QtdEstoque` double NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `produto`
--

INSERT INTO `produto` (`numero`, `nome`, `descricao`, `preco`, `QtdEstoque`) VALUES
('302046', 'Arame Inox', 'Arame para múltiplas aplicações', 31.99, 27),
('6523', 'Pia Azul', 'Pia de banheiro', 99.9, 19),
('6597', 'Chave de Fenda Tramontina', 'Chave de fenda 1.5mm', 8, 23);

--
--
-- Índices para tabela `cliente`
--
ALTER TABLE `cliente`
  ADD PRIMARY KEY (`CPF`);

--
--
-- Índices para tabela `funcionario`
--
ALTER TABLE `funcionario`
  ADD PRIMARY KEY (`CPF`);

--
-- Índices para tabela `itempedido`
--
ALTER TABLE `itempedido`
  ADD PRIMARY KEY (`itempedidoid`);

--
-- Índices para tabela `pedido`
--
ALTER TABLE `pedido`
  ADD PRIMARY KEY (`id`);

--
-- Índices para tabela `produto`
--
ALTER TABLE `produto`
  ADD PRIMARY KEY (`numero`);

--
-- Restrições para despejos de tabelas
--

--
-- Limitadores para a tabela `pedido`
--
ALTER TABLE `pedido`
  ADD CONSTRAINT `fkcliente` FOREIGN KEY (`idCliente`) REFERENCES `cliente` (`CPF`) ON DELETE CASCADE ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
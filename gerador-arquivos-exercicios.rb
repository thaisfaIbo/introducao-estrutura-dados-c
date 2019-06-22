# Thaís Falbo - 2019
# Script para gerar os arquivos dos exercícios em C

puts 'Qual é o número do capítulo?'
numero_capitulo = gets.chomp
pasta_capitulo = "#{Dir.pwd}/capitulo-#{numero_capitulo}"

if Dir.exist?(pasta_capitulo)
  puts "A pasta do capítulo #{numero_capitulo} já existe! Fechando programa"
else
  Dir.mkdir(pasta_capitulo)

  puts 'Quantas questões tem?'

  questoes = gets.chomp.to_i

  conteudo = "#include <stdio.h>\n\nint main(void) {\n  // Codigo\n}\n"

  (1..questoes).each do |questao|
    arquivo_questao = "#{pasta_capitulo}/questao_#{questao}.c"
    File.open(arquivo_questao, 'w') { |f| f.write(conteudo) }
  end
end

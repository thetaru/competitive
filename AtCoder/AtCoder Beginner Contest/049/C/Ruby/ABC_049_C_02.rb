S = gets.chomp

regex = Regexp.new('^(dream|dreamer|erase|eraser)*$')
if S =~ regex
    puts "YES"
else
    puts "NO"
end
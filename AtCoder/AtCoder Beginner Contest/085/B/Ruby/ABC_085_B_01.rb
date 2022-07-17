require 'set'
N = gets.chomp.to_i
d = Set.new

N.times do |i|
    d.add(gets.chomp.to_i)
end

puts "#{d.size}"
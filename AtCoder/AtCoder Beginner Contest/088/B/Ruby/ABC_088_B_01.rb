N = gets.chomp.to_i
a = gets.chomp.split(" ").map(&:to_i)

alice = 0
bob = 0

a.sort.reverse.each.with_index(0) do |n, i|
    if i % 2 == 0
        alice += n
    else
        bob += n
    end
end

puts "#{alice - bob}"

def calc_digit_sum(n)
    digit_sum = 0
    while n != 0 do
        digit_sum += n % 10
        n = n / 10
    end
    digit_sum
end

(N, A, B) = gets.chomp.split(" ").map(&:to_i)

sum = 0

(1..N).each do |i|
    if A <= calc_digit_sum(i) && calc_digit_sum(i) <= B
        sum += i
    end
end

puts "#{sum}"
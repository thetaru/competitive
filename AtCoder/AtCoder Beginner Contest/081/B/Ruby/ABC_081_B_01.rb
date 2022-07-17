N = gets.chomp.to_i
A = gets.chomp.split(" ").map(&:to_i)

count = 0

while true do
    A.each do |n|
        if n % 2 != 0
            puts "#{count}"
            return 0
        end
    end
    A.map! { |n| n / 2}
    count += 1
end
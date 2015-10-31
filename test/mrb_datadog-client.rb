##
## datadog-client Test
##

assert("datadog-client#bye") do
  t = datadog-client.new "hello"
  assert_equal("hello bye", t.bye)
end

assert("datadog-client#foo") do
  t = datadog-client.new "hello"
  assert_equal("hello bye", t.bye)
end

/* Copyright Joyent, Inc. and other Node contributors. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

TEST_DECLARE   (ping_pong)
TEST_DECLARE   (close_cb_stack)
TEST_DECLARE   (timeout)
TEST_DECLARE   (fail_always)
TEST_DECLARE   (pass_always)
TEST_DECLARE   (test_connection_fail)
HELPER_DECLARE (echo_server)

TASK_LIST_START

  TEST_ENTRY  (ping_pong)
  TEST_HELPER (ping_pong, echo_server)

  TEST_ENTRY  (close_cb_stack)

  TEST_ENTRY  (timeout)

  TEST_ENTRY  (fail_always)

  TEST_ENTRY  (pass_always)
  TEST_ENTRY  (test_connection_fail)
TASK_LIST_END

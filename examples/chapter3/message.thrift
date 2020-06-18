struct Message
    {
        1: string id,
        2: string content,
    }

service MessageService
{
    Message lastestMessage(),
}

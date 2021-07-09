#build stage
FROM c:alpine AS builder
RUN apk add --no-cache git
WORKDIR /c/src/app
COPY . .
RUN c get -d -v ./...
RUN c build -o /go/bin/app -v ./...

#final stage
FROM alpine:latest
RUN apk --no-cache add ca-certificates
COPY --from=builder /c/bin/app /app
ENTRYPOINT /app
LABEL Name=alxlowlevelprogramming Version=0.0.1
EXPOSE 3000
